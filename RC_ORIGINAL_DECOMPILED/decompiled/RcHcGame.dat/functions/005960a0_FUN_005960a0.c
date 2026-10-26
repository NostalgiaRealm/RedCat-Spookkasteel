/*
 * FUN_005960a0 at 005960a0
 * undefined FUN_005960a0(void)
 * Address ranges: 005960a0-00596117
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64ff6c slot 28 for .?AVCAdamCursorActor@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64ff6c slot 28 for
   .?AVCAdamCursorActor@@. Original bytes unchanged; names and types still inferred. */

void __thiscall FUN_005960a0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  float10 fVar3;
  undefined4 uVar4;
  undefined1 local_c [12];
  
  FUN_00595470();
  FUN_00556560();
  cVar1 = FUN_0059b1f0();
  if (cVar1 != '\0') {
    uVar4 = 0;
    FUN_00595470(0);
    uVar2 = FUN_0059bd20();
    uVar2 = (**(code **)(*param_1 + 0x48))(local_c,uVar2);
    fVar3 = (float10)FUN_005b1600(uVar2);
    FUN_00595ec0((float)fVar3,uVar4);
  }
  uVar2 = 0x3f800000;
  FUN_00595470(0x3f800000);
  FUN_0059bc10(uVar2);
  FUN_004a09f0(param_3);
  return;
}

