// Fill out your copyright notice in the Description page of Project Settings.


#include "EventManagerActor.h"

// Sets default values
AEventManagerActor::AEventManagerActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEventManagerActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEventManagerActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEventManagerActor::AddInvoker(IPointsAddedInvokerInterface* Invoker)
{
	// add new invoker and add all listeners for new invoker
	PointsAddedEventInvokers.Add(Invoker);
	for (auto& Element : PointsAddedEventListeners)
	{
		FDelegateHandle DelegateHandle = Element.Key->AddToPointsAddedEvent(
			Invoker->GetPointsAddedEvent());
		Element.Value.Add(Invoker, DelegateHandle);
	}
}

void AEventManagerActor::RemoveInvoker(IPointsAddedInvokerInterface* Invoker)
{
	// remove all listeners from invoker
	for (auto& Element : PointsAddedEventListeners)
	{
		if (Element.Value.Contains(Invoker))
		{
			Invoker->GetPointsAddedEvent().Remove(
				Element.Value[Invoker]);
			Element.Value.Remove(Invoker);
		}
	}

	// remove invoker
	PointsAddedEventInvokers.Remove(Invoker);
}

void AEventManagerActor::AddListener(AGameHUD* Listener)
{
	// add new listener and add new listener to all invokers
	PointsAddedEventListeners.Add(Listener);
	for (auto& Element : PointsAddedEventInvokers)
	{
		FDelegateHandle DelegateHandle = Listener->AddToPointsAddedEvent(
			Element->GetPointsAddedEvent());
		PointsAddedEventListeners[Listener].Add(Element, DelegateHandle);
	}
}

void AEventManagerActor::RemoveListener(AGameHUD* Listener)
{
	// remove listener from all invokers
	for (auto& Element : PointsAddedEventInvokers)
	{
		if (PointsAddedEventListeners[Listener].Contains(Element))
		{
			Element->GetPointsAddedEvent().Remove(
				PointsAddedEventListeners[Listener][Element]);
			PointsAddedEventListeners[Listener].Remove(Element);
		}
	}

	// remove listener
	PointsAddedEventListeners.Remove(Listener);
}

///**
// * Adds the given invoker as an invoker of the message event
// * @param Invoker invoker
//*/
//void AEventManagerActor::AddInvoker(ADelegateTalkerActor* Invoker)
//{
//	// add new invoker and add all listeners for new invoker
//	MessageEventInvokers.Add(Invoker);
//	for (auto& Element : MessageEventListeners)
//	{
//		FDelegateHandle DelegateHandle = Element.Key->AddToMessageEvent(
//			Invoker->GetMessageEvent());
//		Element.Value.Add(Invoker, DelegateHandle);
//	}
//}
//
///**
// * Removes the given invoker as an invoker of the message event
// * @param Invoker invoker
//*/
//void AEventManagerActor::RemoveInvoker(ADelegateTalkerActor* Invoker)
//{
//	// remove all listeners from invoker
//	for (auto& Element : MessageEventListeners)
//	{
//		if (Element.Value.Contains(Invoker))
//		{
//			Invoker->GetMessageEvent().Remove(
//				Element.Value[Invoker]);
//			Element.Value.Remove(Invoker);
//		}
//	}
//
//	// remove invoker
//	MessageEventInvokers.Remove(Invoker);
//}
//
///**
// * Adds the given listener as a listener for the message event
// * @param Listener listener
//*/
//void AEventManagerActor::AddListener(ADelegateListenerActor* Listener)
//{
//	// add new listener and add new listener to all invokers
//	MessageEventListeners.Add(Listener);
//	for (auto& Element : MessageEventInvokers)
//	{
//		FDelegateHandle DelegateHandle = Listener->AddToMessageEvent(
//			Element->GetMessageEvent());
//		MessageEventListeners[Listener].Add(Element, DelegateHandle);
//	}
//}
//
///**
// * Removes the given listener as a listener for the message event
// * @param Listener listener
//*/
//void AEventManagerActor::RemoveListener(ADelegateListenerActor* Listener)
//{
//	// remove listener from all invokers
//	for (auto& Element : MessageEventInvokers)
//	{
//		if (MessageEventListeners[Listener].Contains(Element))
//		{
//			Element->GetMessageEvent().Remove(
//				MessageEventListeners[Listener][Element]);
//			MessageEventListeners[Listener].Remove(Element);
//		}
//	}
//
//	// remove invoker
//	MessageEventListeners.Remove(Listener);
//}