/*
 * FUN_004cf2d0 at 004cf2d0
 * undefined FUN_004cf2d0(void)
 * Address ranges: 004cf2d0-004cf32f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64ef44 slot 4 for .?AVCAdamElevatorModel@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64ef44 slot 4 for
   .?AVCAdamElevatorModel@@. Original bytes unchanged; names and types still inferred. */

void __thiscall FUN_004cf2d0(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined1 uVar3;
  
  iVar2 = FUN_0060a6f2(param_2,0,&CAdamGO::RTTI_Type_Descriptor,&CAdamPlayer::RTTI_Type_Descriptor,0
                      );
  if (iVar2 != 0) {
    iVar2 = *(int *)(param_1 + 0x168);
    if ((iVar2 == 1) || (iVar2 == 5)) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
    *(undefined1 *)(param_1 + 0x16d) = uVar3;
    if (iVar2 == 1) {
      cVar1 = FUN_004cc420();
      if (cVar1 != '\0') {
        *(undefined1 *)(param_1 + 0x16c) = 1;
      }
    }
  }
  return;
}

