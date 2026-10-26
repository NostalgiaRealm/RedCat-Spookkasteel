/*
 * FUN_0052c25c at 0052c25c
 * undefined __register FUN_0052c25c(int * param_1, int param_2)
 * Address ranges: 0052c25c-0052c358
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0052c25c(int *param_1,int param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_120;
  undefined1 *puStack_11c;
  undefined1 *puStack_118;
  byte local_114 [256];
  int local_14;
  char local_d;
  int local_c;
  int *local_8;
  
  puStack_118 = &stack0xfffffffc;
  local_14 = 0;
  puStack_11c = &LAB_0052c359;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  puVar1 = &stack0xfffffffc;
  local_c = param_2;
  local_8 = param_1;
  if (param_1[0x20] == 0) {
    FUN_00402fe0(*param_1,local_114);
    FUN_00403fd4(&local_14,local_114);
    FUN_00404038(&local_14,(undefined4 *)".MoveTo");
    FUN_00403d94(local_14);
    puVar1 = puStack_118;
  }
  puStack_118 = puVar1;
  if (-1 < local_c) {
    iVar2 = FUN_0045da14(local_8[0x20]);
    if (local_c < iVar2) {
      iVar2 = FUN_0045da14(local_8[0x20]);
      if (0 < iVar2) {
        local_d = '\x01';
        goto LAB_0052c2f8;
      }
    }
  }
  local_d = '\0';
LAB_0052c2f8:
  if ((((char)local_8[0x10] != '\x02') && (local_8[0x22] == local_8[0x23])) &&
     ((char)local_8[4] == '\0')) {
    FUN_0052caa4((int)local_8,local_8[0x22]);
  }
  if (local_d != '\0') {
    FUN_0052c428(local_8,local_c);
  }
  *in_FS_OFFSET = uStack_120;
  puStack_118 = &LAB_0052c360;
  puStack_11c = (undefined1 *)0x52c358;
  FUN_00403db0(&local_14);
  return;
}

