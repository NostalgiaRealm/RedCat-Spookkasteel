/*
 * FUN_004e3fa0 at 004e3fa0
 * undefined __register FUN_004e3fa0(int * param_1, int param_2)
 * Address ranges: 004e3fa0-004e409d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004e3fa0(int *param_1,int param_2)

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
  puStack_11c = &LAB_004e409e;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  puVar1 = &stack0xfffffffc;
  local_c = param_2;
  local_8 = param_1;
  if (param_1[0x20] == 0) {
    FUN_00402fe0(*param_1,local_114);
    FUN_00403fd4(&local_14,local_114);
    FUN_00404038(&local_14,(undefined4 *)".UpdateCurrentRowNr");
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
        goto LAB_004e403c;
      }
    }
  }
  local_d = '\0';
LAB_004e403c:
  if ((((char)local_8[0x10] != '\x02') && (local_8[0x22] == local_8[0x23])) &&
     ((char)local_8[4] == '\0')) {
    FUN_004e48c8((int)local_8,local_8[0x22]);
  }
  if (local_d != '\0') {
    local_8[0x22] = local_c;
  }
  *in_FS_OFFSET = uStack_120;
  puStack_118 = &LAB_004e40a5;
  puStack_11c = (undefined1 *)0x4e409d;
  FUN_00403db0(&local_14);
  return;
}

