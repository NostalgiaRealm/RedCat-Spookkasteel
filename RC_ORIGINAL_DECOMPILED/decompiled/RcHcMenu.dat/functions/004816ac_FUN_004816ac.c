/*
 * FUN_004816ac at 004816ac
 * undefined __register FUN_004816ac(int param_1, undefined * param_2, char param_3, char param_4)
 * Address ranges: 004816ac-0048174f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004816ac(int param_1,undefined *param_2,char param_3,char param_4)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int local_14;
  undefined1 local_e;
  char local_d;
  undefined *local_c;
  int local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_14 = 0;
  puStack_20 = &LAB_0048178a;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_28 = (undefined1 *)0x4816dc;
  local_d = param_3;
  local_c = param_2;
  local_8 = param_1;
  FUN_00480a24(param_1);
  puStack_28 = (undefined1 *)0x4816e4;
  FUN_00481830(local_8);
  puStack_2c = &LAB_0048176d;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puStack_34 = (undefined1 *)0x4816fa;
  puStack_28 = &stack0xfffffffc;
  local_e = FUN_00481f8c(local_8);
  puStack_38 = &LAB_00481750;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  puStack_34 = &stack0xfffffffc;
  FUN_00480768(local_8,local_d);
  FUN_0047faa8(local_c,&local_14);
  FUN_00480a40(local_8,(byte *)"\\DATABASES\\%s",local_14);
  *in_FS_OFFSET = uStack_3c;
  puStack_34 = &LAB_00481757;
  if (param_4 != '\0') {
    puStack_38 = (undefined1 *)0x48174f;
    FUN_00481fe4(local_8,local_e);
  }
  return;
}

