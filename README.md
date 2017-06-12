## Microservices

Microservices is a suite of Drupal features (prefixed by ms_) which have been created in the context of the
Humanitarian Hub and can be reused by other entities to easily integrate taxonomies which are pulled and
synchronized from sites which belong to the Humanitarian Hub.

More documentation concerning the full suite of modules can be found [here](https://github.com/un-ocha/ms_core).

This module provides a local taxonomy (ms_disasters) which content is synchronized with the list of disasters available in [https://api.reliefweb.int/v1/disasters](https://api.reliefweb.int/v1/disasters). Both the Reliefweb ID and the GLIDE number of the disasters are stored locally, and can be used as a unique key to update the terms in the local taxonomy with the terms which come from [https://api.reliefweb.int/v1/disasters](https://api.reliefweb.int/v1/disasters).
