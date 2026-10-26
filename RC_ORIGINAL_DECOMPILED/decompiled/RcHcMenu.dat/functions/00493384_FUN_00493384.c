/*
 * FUN_00493384 at 00493384
 * undefined __register FUN_00493384(int * param_1, int * param_2)
 * Address ranges: 00493384-004934c1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00493384(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *in_FS_OFFSET;
  char *pcStack_150;
  undefined1 *puStack_14c;
  undefined1 *puStack_148;
  undefined4 *local_144;
  byte local_140 [256];
  int local_40;
  int local_3c;
  byte local_38 [28];
  int local_1c;
  int local_18;
  int *local_14;
  int *local_10;
  int *local_c;
  int *local_8;
  
  puStack_148 = &stack0xfffffffc;
  local_144 = (undefined4 *)0x0;
  local_3c = 0;
  local_40 = 0;
  puStack_14c = &LAB_004934c2;
  pcStack_150 = (char *)*in_FS_OFFSET;
  *in_FS_OFFSET = &pcStack_150;
  local_c = param_2;
  local_8 = param_1;
  FUN_00403db0(param_2);
  piVar1 = (int *)FUN_00494858(local_8);
  iVar2 = FUN_0049278c(piVar1);
  local_10 = *(int **)(iVar2 + 0x10);
  iVar2 = FUN_0048ec24((int)local_10);
  uVar3 = iVar2 - 1;
  if (SBORROW4(iVar2,1)) {
    uVar3 = thunk_FUN_00402874(uVar3);
  }
  if (-1 < (int)uVar3) {
    local_1c = uVar3 + 1;
    local_18 = 0;
    do {
      if (0 < local_18) {
        FUN_00404038(local_c,(undefined4 *)&DAT_004934d8);
      }
      FUN_0048f02c(local_10,local_18,(undefined4 *)local_38);
      local_14 = (int *)FUN_00494c5c(local_8,local_38);
      if (local_14 == (int *)0x0) {
        FUN_00402fe0(*local_8,local_140);
        FUN_00403fd4(&local_40,local_140);
        pcStack_150 = "AppProp in default sortorder not allocated";
        FUN_004040f0(&local_3c,3);
        FUN_00403d94(local_3c);
      }
      FUN_004966b4(local_14,&local_144);
      FUN_00404038(local_c,local_144);
      local_18 = local_18 + 1;
      local_1c = local_1c + -1;
    } while (local_1c != 0);
  }
  *in_FS_OFFSET = pcStack_150;
  puStack_148 = &LAB_004934c9;
  puStack_14c = (undefined1 *)0x4934b4;
  FUN_00403db0((int *)&local_144);
  puStack_14c = (undefined1 *)0x4934c1;
  FUN_00403dd4(&local_40,2);
  return;
}

