/*
 * FUN_0051d610 at 0051d610
 * undefined FUN_0051d610(void)
 * Address ranges: 0051d610-0051d66c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64f658 slot 14 for .?AVCAdamGameState_GS_RESTART@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64f658 slot 14 for
   .?AVCAdamGameState_GS_RESTART@@. Original bytes unchanged; names and types still inferred. */

void __fastcall FUN_0051d610(int param_1)

{
  char cVar1;
  int *piVar2;
  undefined1 local_1c [28];
  
  if (DAT_006b915c == 0) {
    FUN_004bc480();
  }
  while( true ) {
    FUN_005aaca0();
    cVar1 = FUN_005a9c30(local_1c);
    if (cVar1 == '\0') break;
    if (DAT_006b915c == 0) {
      FUN_004bc480();
    }
    piVar2 = (int *)FUN_0051d750();
    cVar1 = (**(code **)(*piVar2 + 0x40))(0x1b);
    if (cVar1 != '\0') {
      *(undefined1 *)(param_1 + 0x78) = 1;
    }
  }
  return;
}

