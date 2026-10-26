/*
 * FUN_005f8990 at 005f8990
 * undefined FUN_005f8990(void)
 * Address ranges: 005f8990-005f8a72;005f8b7f-005f8b9a;005f8d05-005f8d27
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005f8990(undefined4 param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_58 [8];
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_006487cf;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  FUN_004040a0(0);
  local_c = 1;
  FUN_004040a0(0);
  local_c._0_1_ = 2;
  if (*(int *)(param_3 + 8) == 1) {
    local_58[0] = *(undefined8 *)(param_3 + 0x10);
    local_68 = *(undefined4 *)(param_4 + 0x10);
    local_64 = *(undefined4 *)(param_4 + 0x14);
                    /* WARNING: Could not recover jumptable at 0x005f8d21. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&PTR_LAB_005f8e98)[param_2 + -1])();
    return;
  }
  if (*(int *)(param_3 + 8) != 2) {
    uVar1 = FUN_0045da10(local_58);
    local_c._0_1_ = 3;
    FUN_0040cc00(uVar1,0,0xffffffff);
    local_c._0_1_ = 2;
    FUN_004040a0(1);
    uVar1 = FUN_0045da10(&local_68);
    local_c._0_1_ = 4;
    FUN_0040cc00(uVar1,0,0xffffffff);
    local_c = CONCAT31(local_c._1_3_,2);
    FUN_004040a0(1);
                    /* WARNING: Could not recover jumptable at 0x005f8a6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(&DAT_005f8e30 + (param_2 + -1) * 4))();
    return;
  }
  local_68 = *(undefined4 *)(param_3 + 0x10);
  local_58[0] = CONCAT44(local_58[0]._4_4_,*(undefined4 *)(param_4 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x005f8b94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&PTR_LAB_005f8e58)[param_2 + -1])();
  return;
}

