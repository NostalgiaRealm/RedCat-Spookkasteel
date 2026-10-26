/*
 * FUN_0040f2d0 at 0040f2d0
 * undefined FUN_0040f2d0(void)
 * Address ranges: 0040f2d0-0040f3c4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64ad74 slot 35 for .?AVCRcPlant@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64ad74 slot 35 for
   .?AVCRcPlant@@. Original bytes unchanged; names and types still inferred. */

void FUN_0040f2d0(int param_1,undefined4 param_2,float param_3)

{
  char cVar1;
  uint uVar2;
  float10 fVar3;
  undefined1 *puVar4;
  undefined1 local_1c [4];
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00620cc8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (3.4028235e+38 <= param_3) {
    ExceptionList = &local_c;
    fVar3 = (float10)FUN_00424950();
    param_3 = (float)fVar3;
  }
  if (param_1 == 1) {
    uVar2 = FUN_0060a4a0();
    uVar2 = uVar2 & 0x80000003;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xfffffffc) + 1;
    }
    FUN_005ae390(local_1c,s_idle_d_0068e808,uVar2);
    puVar4 = local_1c;
    local_4 = 0;
    FUN_00423700(puVar4,param_2,param_3);
    FUN_004a0660(puVar4,param_2,param_3);
    if (local_18 != 0) {
      cVar1 = *(char *)(local_18 + -1);
      if ((cVar1 != '\0') && (cVar1 != -1)) {
        *(char *)(local_18 + -1) = cVar1 + -1;
        ExceptionList = local_c;
        return;
      }
      FUN_005fe5f0(local_18 + -1);
      ExceptionList = local_c;
      return;
    }
  }
  else {
    FUN_004233e0(param_1,param_2,param_3);
  }
  ExceptionList = local_c;
  return;
}

