<?php
// $Id$

$plugin = array(
  'info' => 'Test Block',
  'subject' => 'ctools_block_example_block_example2_subject',
  'content' => 'ctools_block_example_block_example1_content',
);

function ctools_block_example_block_example2_subject() {
  return t('Test Block 1 subject');
}

function ctools_block_example_block_example2_content() {
  return t('Test Block 1 output');
}
