/*
 * FUN_0053e9f8 at 0053e9f8
 * undefined __register FUN_0053e9f8(int * param_1, int * param_2)
 * Address ranges: 0053e9f8-0053eaf3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0053e9f8(int *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 *in_FS_OFFSET;
  char *pcStack_170;
  undefined4 uStack_164;
  undefined1 *puStack_160;
  undefined1 *puStack_15c;
  byte local_158 [256];
  int local_58;
  int local_54;
  byte local_50 [28];
  byte local_34 [28];
  int local_18;
  int local_14;
  int local_10;
  int *local_c;
  int *local_8;
  
  puStack_15c = &stack0xfffffffc;
  local_54 = 0;
  local_58 = 0;
  puStack_160 = &LAB_0053eaf4;
  uStack_164 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_164;
  local_10 = -1;
  local_c = param_2;
  local_8 = param_1;
  iVar2 = FUN_0048ec24(param_1[0xef]);
  uVar3 = iVar2 - 1;
  if (SBORROW4(iVar2,1)) {
    uVar3 = thunk_FUN_00402874(uVar3);
  }
  if (-1 < (int)uVar3) {
    local_18 = uVar3 + 1;
    local_14 = 0;
    do {
      FUN_0048f02c((int *)local_8[0xef],local_14,(undefined4 *)local_34);
      FUN_00495f2c(local_c,local_50);
      cVar1 = FUN_0048d3ac(local_34,local_50);
      if (cVar1 != '\0') {
        local_10 = local_14;
        break;
      }
      local_14 = local_14 + 1;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  if (local_10 == -1) {
    FUN_00402fe0(*local_8,local_158);
    FUN_00403fd4(&local_58,local_158);
    pcStack_170 = "AppProp not found in the Column list.";
    FUN_004040f0(&local_54,3);
    FUN_00403d94(local_54);
  }
  *in_FS_OFFSET = pcStack_170;
  FUN_00403dd4(&local_58,2);
  return;
}

