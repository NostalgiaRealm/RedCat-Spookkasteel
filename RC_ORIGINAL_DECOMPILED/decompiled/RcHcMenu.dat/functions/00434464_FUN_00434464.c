/*
 * FUN_00434464 at 00434464
 * undefined __register FUN_00434464(int * param_1, int * param_2)
 * Address ranges: 00434464-004344fc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00434464(int *param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  uint *local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = (uint *)0x0;
  puStack_1c = &LAB_004344fd;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  uVar1 = FUN_0040320c(param_2,(int)&PTR_FUN_0043d40c);
  if ((char)uVar1 == '\0') {
    FUN_00412b58(param_1,param_2);
  }
  else {
    uVar1 = (**(code **)(*param_1 + 0x4c))();
    FUN_0043dd00(param_2,uVar1);
    FUN_0043ddb0(param_2,(uint *)param_1[0x1c]);
    FUN_00432714((int)param_1,(int *)&local_8);
    FUN_0043dc40(param_2,local_8);
    FUN_0043decc(param_2,CONCAT31((int3)((uint)extraout_EDX >> 8),
                                  *(undefined1 *)((int)param_1 + 0x47)));
    (**(code **)(*param_2 + 0x34))();
  }
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00434504;
  puStack_1c = (undefined1 *)0x4344fc;
  FUN_00403db0((int *)&local_8);
  return;
}

