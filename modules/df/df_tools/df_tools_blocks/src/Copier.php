<?php

namespace Drupal\df_tools_blocks;

use Drupal\replicate\Replicator;
use Drupal\Core\Entity\EntityTypeManager;
use Drupal\Component\EventDispatcher\ContainerAwareEventDispatcher;

/**
 * Class Copier.
 *
 * @package Drupal\df_tools_blocks
 */
class Copier {

  /**
   * Drupal\Core\Entity\EntityTypeManager definition.
   *
   * @var \Drupal\Core\Entity\EntityTypeManager
   */
  protected $entityTypeManager;
  /**
   * Drupal\Component\EventDispatcher\ContainerAwareEventDispatcher definition.
   *
   * @var \Drupal\Component\EventDispatcher\ContainerAwareEventDispatcher
   */
  protected $eventDispatcher;
  /**
   * Constructor.
   */
  public function __construct(EntityTypeManager $entity_type_manager, ContainerAwareEventDispatcher $event_dispatcher) {
    $this->entityTypeManager = $entity_type_manager;
    $this->eventDispatcher = $event_dispatcher;
  }

  public function makeCopy($entity) {
    // Instantiate a new replicator.
    $replicator = new Replicator($this->entityTypeManager, $this->eventDispatcher);
    // Copy and return the entity.
    if ($copy = $replicator->replicateEntity($entity)) {
      return $copy;
    }
    else {
      return false;
    }
  }

}
