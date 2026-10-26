/*
 * FUN_004935cc at 004935cc
 * undefined __register FUN_004935cc(int * param_1, int * param_2, int * param_3)
 * Address ranges: 004935cc-004936e1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004935cc(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *in_FS_OFFSET;
  int **ppiVar4;
  byte local_44 [28];
  int local_28;
  int local_24;
  undefined4 local_20;
  int *local_1c;
  undefined4 local_18;
  int *local_14;
  int *local_10;
  int *local_c;
  int *local_8;
  
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  if (param_2 == (int *)0x0) {
    FUN_00403d94(" Parameter cannot be nil");
  }
  if (local_10 == (int *)0x0) {
    FUN_00403d94(" Parameter cannot be nil");
  }
  iVar1 = FUN_00402fdc(local_c);
  iVar2 = FUN_00402fdc(local_8);
  if (iVar1 != iVar2) {
    FUN_00403d94("Cannot assign, different appObj-types");
  }
  FUN_0045f830((int)local_8);
  FUN_0045f864((int)local_8);
  ppiVar4 = (int **)*in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffffac;
  iVar1 = FUN_0048ec24((int)local_10);
  uVar3 = iVar1 - 1;
  if (SBORROW4(iVar1,1)) {
    uVar3 = thunk_FUN_00402874(uVar3);
  }
  if (-1 < (int)uVar3) {
    local_28 = uVar3 + 1;
    local_24 = 0;
    do {
      FUN_0048f02c(local_10,local_24,(undefined4 *)local_44);
      FUN_00494e38(local_c,local_44,'\x01',&local_1c,&local_20);
      ppiVar4 = &local_14;
      FUN_00494e38(local_8,local_44,'\x01',ppiVar4,&local_18);
      FUN_00495f94(local_14,local_1c);
      local_24 = local_24 + 1;
      local_28 = local_28 + -1;
    } while (local_28 != 0);
  }
  *in_FS_OFFSET = ppiVar4;
  FUN_0045f898(local_8);
  FUN_0045f938(local_8);
  return;
}

