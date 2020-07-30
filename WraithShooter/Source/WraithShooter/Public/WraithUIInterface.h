// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "WraithUIInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UWraithUIInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class WRAITHSHOOTER_API IWraithUIInterface
{
	GENERATED_BODY()
	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
    
    //setup interface functionality
    virtual FString GetTestName();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent,Category = Interfaces)
    bool ReactToPlayerExited();
    
    //Declare function must be implemented in c++
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = Interfaces)
    bool ReactToPlayerEntered();
    
};
