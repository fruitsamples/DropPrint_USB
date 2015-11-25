/*	File:		ListInDialog.h	Contains:		Written by: Olav Andrade	Copyright:	� 1998 by Apple Computer, Inc., all rights reserved.	Change History:	To Do:*/#ifndef __DIALOGS__#include <dialogs.h>#endif#ifndef __LISTS__#include <lists.h>#endifvoid			SetupMenus( void );pascal Boolean	theListFilter( DialogPtr theDialog, EventRecord *theEvent, short *itemHit);void			SetUpList(ListHandle theList, char *path );void			GetNameFromCell (StringPtr theString, Cell cell, ListHandle hList);ListHandle		MakeDialogList( DialogPtr dlg, int item );int				ChoosePrinter( char *name, long *blocksize, int *repeat_count );void			HiliteOk( DialogPtr dlg );void			FrameOk( DialogPtr dlg );int				GetDialogPopupValue( DialogPtr dlg, int item );void			SetDialogPopupValue( DialogPtr dlg, int item, int value );