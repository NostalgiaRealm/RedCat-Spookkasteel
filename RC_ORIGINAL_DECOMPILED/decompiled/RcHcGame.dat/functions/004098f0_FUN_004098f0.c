/*
 * FUN_004098f0 at 004098f0
 * undefined FUN_004098f0(void)
 * Address ranges: 004098f0-00409a53
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64a950 slot 2 for .?AV?$CRcSpiderMoveToStart@VCRcTouchSpider@@@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64a950 slot 2 for
   .?AV?$CRcSpiderMoveToStart@VCRcTouchSpider@@@@. Original bytes unchanged; names and types still
   inferred. */

void __fastcall FUN_004098f0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  float10 fVar6;
  undefined1 local_1c [4];
  undefined1 auStack_18 [12];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006206f8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_004284d0();
  cVar1 = FUN_0059be60();
  if (cVar1 == '\0') {
    uVar2 = FUN_00414180(local_1c);
    local_4 = 0;
    FUN_004288c0(uVar2);
    FUN_005968d0(uVar2);
    local_4 = 0xffffffff;
    FUN_005630e0();
    uVar2 = 0;
  }
  else {
    FUN_00414180(local_1c);
    local_4 = 1;
    FUN_004284d0();
    FUN_0059be40();
    iVar3 = FUN_0059b1e0();
    iVar4 = FUN_0059b1e0();
    local_4 = 0xffffffff;
    FUN_005630e0();
    if (iVar3 == iVar4) {
      FUN_004288c0();
      FUN_00596620();
      puVar5 = (undefined4 *)(**(code **)(**(int **)(param_1 + 0x2c) + 0x48))(auStack_18);
      *(undefined4 *)(param_1 + 0x30) = *puVar5;
      *(undefined4 *)(param_1 + 0x34) = puVar5[1];
      *(undefined4 *)(param_1 + 0x38) = puVar5[2];
      fVar6 = (float10)FUN_00418400();
      *(float *)(param_1 + 0x34) = (float)fVar6;
      (**(code **)(**(int **)(param_1 + 0x2c) + 0x8c))(1,0,0x7f7fffff);
      uVar2 = 1;
    }
    else {
      uVar2 = FUN_00414180(local_1c);
      local_4 = 2;
      FUN_004288c0(uVar2);
      FUN_005968d0(uVar2);
      local_4 = 0xffffffff;
      FUN_005630e0();
      uVar2 = 0;
    }
  }
  FUN_00402a10(uVar2,0);
  ExceptionList = pvStack_c;
  return;
}

