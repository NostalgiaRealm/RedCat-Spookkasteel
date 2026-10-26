/*
 * FUN_004e7ea8 at 004e7ea8
 * undefined __register FUN_004e7ea8(undefined4 * param_1, undefined4 * param_2)
 * Address ranges: 004e7ea8-004e801f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004e7ea8(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  float10 in_ST1;
  undefined4 uStack_4c;
  undefined1 *puStack_48;
  undefined1 *puStack_44;
  undefined4 *local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  char *local_1c;
  undefined4 *local_18;
  longlong local_14;
  undefined4 *local_8;
  
  local_38 = (undefined4 *)0x0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_18 = (undefined4 *)0x0;
  local_24 = *param_2;
  local_20 = param_2[1];
  local_1c = (char *)param_2[2];
  puStack_44 = (undefined1 *)0x4e7ed7;
  local_8 = param_1;
  FUN_004041e4((int)param_1);
  puStack_44 = (undefined1 *)0x4e7ee5;
  FUN_0040496c((int)&local_24,(int)&DAT_004e7d2c);
  puStack_48 = &LAB_004e8020;
  uStack_4c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_4c;
  puStack_44 = &stack0xfffffffc;
  FUN_0045915c(local_8,local_1c,&local_28);
  FUN_00409924(local_28,(int *)&local_18);
  FUN_004586fc(*PTR_DAT_00572508,local_18,&local_2c);
  FUN_00403e48((int *)&local_18,local_2c);
  if ((((char)local_20 == '\0') || ((char)local_20 == '\x04')) || ((char)local_20 == '\x0e')) {
    iVar1 = FUN_00458810("(",(int)local_18,1);
    if (0 < iVar1) {
      FUN_004586fc('(',local_18,&local_30);
      FUN_00403e48((int *)&local_18,local_30);
      FUN_004586fc(')',local_18,&local_34);
      FUN_00403e48((int *)&local_18,local_34);
      FUN_0040407c((int *)&local_18,(undefined4 *)&DAT_004e8044,local_18);
    }
  }
  else {
    iVar1 = FUN_00458810("-",(int)local_18,1);
    if (0 < iVar1) {
      FUN_004586fc('-',local_18,(int *)&local_38);
      FUN_0040407c((int *)&local_18,(undefined4 *)&DAT_004e8044,local_38);
    }
  }
  FUN_0040ab80((undefined *)local_18);
  FUN_004b1824();
  local_14 = (longlong)ROUND(in_ST1 * (float10)10000.0);
  *in_FS_OFFSET = uStack_4c;
  puStack_44 = &LAB_004e8027;
  puStack_48 = (undefined1 *)0x4e8001;
  FUN_00403dd4((int *)&local_38,5);
  puStack_48 = (undefined1 *)0x4e800f;
  FUN_0040484c((int)&local_24,(int)&DAT_004e7d2c);
  puStack_48 = (undefined1 *)0x4e8017;
  FUN_00403db0((int *)&local_18);
  puStack_48 = (undefined1 *)0x4e801f;
  FUN_00403db0((int *)&local_8);
  return;
}

