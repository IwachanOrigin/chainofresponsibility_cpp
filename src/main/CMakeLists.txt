
set(MAIN_SRC
  main.cpp
  delivery.h
  luggage.h
  heavyluggagedelivery.h
  heavyluggagedelivery.cpp
  mediumluggagedelivery.h
  mediumluggagedelivery.cpp
  lightluggagedelivery.h
  lightluggagedelivery.cpp
)

add_executable(
  ${PROJECT_NAME}
  ${MAIN_SRC}
)

