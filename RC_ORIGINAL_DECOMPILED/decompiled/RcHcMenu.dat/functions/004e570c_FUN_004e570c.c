/*
 * FUN_004e570c at 004e570c
 * undefined __register FUN_004e570c(int * param_1)
 * Address ranges: 004e570c-004e581d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4e310c slot 34 for TAppObjCachedMemList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4e310c slot 34 for
   TAppObjCachedMemList. Original bytes unchanged; names and types still inferred. */

void FUN_004e570c(int *param_1)

{
  undefined1 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  
  puStack_28 = (undefined1 *)0x4e571e;
  iVar2 = (**(code **)(*param_1 + 8))();
  puStack_2c = &LAB_004e581e;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puStack_28 = &stack0xfffffffc;
  piVar3 = FUN_004cf39c((int *)param_1[0xd],extraout_EDX,extraout_ECX);
  piVar4 = (int *)FUN_004cf3c8((int *)param_1[0xd],'\0');
  FUN_004b51e8((int)piVar3);
  FUN_004b49b8(piVar3,param_1[7]);
  uVar1 = FUN_00549b9c((int)param_1);
  *(undefined1 *)(piVar3 + 9) = uVar1;
  FUN_004b4b84((int)piVar3,*(int *)(param_1[0xf] + 0x10));
  piVar3[0xf] = param_1[0xf];
  FUN_004b4e70((int)piVar3,(int *)param_1[10]);
  FUN_004b4f0c(piVar3,0);
  FUN_004d69fc(piVar4,(int)piVar3);
  FUN_004e5684(piVar4,extraout_EDX_00,extraout_ECX_00,(int)&stack0xfffffffc);
  if (iVar2 != 0) {
    FUN_004e3a1c(param_1);
  }
  FUN_00547a58(param_1);
  piVar5 = param_1 + 0x32;
  iVar2 = *piVar5;
  *piVar5 = *piVar5 + 1;
  if (SCARRY4(iVar2,1)) {
    thunk_FUN_00402874((uint)param_1);
  }
  piVar5 = (int *)FUN_00549ff8((int)param_1);
  FUN_00403270(piVar5,extraout_EDX_01,extraout_ECX_01);
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_004e5825;
  puStack_2c = (undefined1 *)0x4e5815;
  FUN_00403094(piVar3);
  puStack_2c = (undefined1 *)0x4e581d;
  FUN_00403094(piVar4);
  return;
}

