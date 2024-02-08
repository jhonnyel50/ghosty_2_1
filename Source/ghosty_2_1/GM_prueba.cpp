// Fill out your copyright notice in the Description page of Project Settings.


#include "GM_prueba.h"
#include "BP_fantasma.h"

AGM_prueba::AGM_prueba()
{//en esta parte llamamos a nuestro actor en el game mode para poder manipularlo
	DefaultPawnClass = ABP_fantasma::StaticClass();
}
