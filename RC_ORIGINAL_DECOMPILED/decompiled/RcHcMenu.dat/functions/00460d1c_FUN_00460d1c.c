/*
 * FUN_00460d1c at 00460d1c
 * undefined __register FUN_00460d1c(byte * param_1, int * param_2)
 * Address ranges: 00460d1c-00460e04
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00460d1c(byte *param_1,int *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined1 uVar1;
  int *piVar2;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  int local_24;
  int local_20;
  undefined1 local_1c;
  int local_18;
  uint *local_14;
  uint *local_10;
  int *local_c;
  byte *local_8;
  
  local_18 = 0;
  local_24 = 0;
  local_14 = (uint *)0x0;
  local_10 = (uint *)0x0;
  puStack_28 = (undefined1 *)0x460d3e;
  local_c = param_2;
  local_8 = param_1;
  FUN_004041e4((int)param_1);
  uVar1 = 1;
  puStack_2c = &LAB_00460e05;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puStack_28 = &stack0xfffffffc;
  FUN_00406a48(&PTR_DAT_00460d14,(int *)&local_10);
  FUN_00404140(local_10,(uint *)"CS_LOWERCASE");
  if ((bool)uVar1) {
    FUN_004096cc(local_8,local_c);
  }
  else {
    FUN_00406a48(&PTR_DAT_00460d14,(int *)&local_14);
    FUN_00404140(local_14,(uint *)"CS_FIRST_UPPERCASE");
    if ((bool)uVar1) {
      FUN_00458644((int)local_8,local_c);
    }
    else {
      piVar2 = &local_18;
      FUN_00406a48(&PTR_DAT_00460d14,&local_24);
      local_20 = local_24;
      local_1c = 0xb;
      FUN_0040a894((byte *)
                   "LocaleCase: Unknown case \"%s\": RS_LOCALE_CASE must be CS_LOWERCASE or CS_FIRST_UPPERCASE."
                   ,&local_20,0,piVar2);
      FUN_00403d94(local_18);
    }
  }
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_00460e0c;
  puStack_2c = (undefined1 *)0x460def;
  FUN_00403db0(&local_24);
  puStack_2c = (undefined1 *)0x460dfc;
  FUN_00403dd4(&local_18,3);
  puStack_2c = (undefined1 *)0x460e04;
  FUN_00403db0((int *)&local_8);
  return;
}

