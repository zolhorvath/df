<?php

/**
 * @file
 * Contains \Drupal\df_admin\EventSubscriber\MenuRouterRebuildSubscriber.
 */

namespace Drupal\df_admin\EventSubscriber;

use Symfony\Component\HttpKernel\KernelEvents;
use Symfony\Component\HttpKernel\Event\GetResponseEvent;
use Symfony\Component\EventDispatcher\EventSubscriberInterface;

/**
 * Rebuilds the menu router to ensure image derivatives are created.
 */
class MenuRouterRebuildSubscriber implements EventSubscriberInterface {

  /**
   * Rebuilds the menu router if the rebuild.dat file is found.
   *
   * @param \Symfony\Component\HttpKernel\Event\GetResponseEvent $event
   *   The Event to process.
   */
  public function onKernelRequestMenuRouterRebuild(GetResponseEvent $event) {
    if (file_exists("public://rebuild.dat")) {
      if (\Drupal::service('router.builder')->rebuild()) {
        file_unmanaged_delete("public://rebuild.dat");
      }
    }
  }

  /**
   * {@inheritdoc}
   */
  static function getSubscribedEvents() {
    $events[KernelEvents::REQUEST][] = ['onKernelRequestMenuRouterRebuild', 255];

    return $events;
  }

}

