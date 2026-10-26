/*
 * FUN_0051e39c at 0051e39c
 * int __register FUN_0051e39c(int param_1)
 * Address ranges: 0051e39c-0051e402
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_0051e39c(int param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_c = 0;
  iVar1 = FUN_0051e160(param_1);
  uVar2 = iVar1 - 1;
  if (SBORROW4(iVar1,1)) {
    uVar2 = thunk_FUN_00402874(uVar2);
  }
  if (-1 < (int)uVar2) {
    local_14 = uVar2 + 1;
    local_10 = 0;
    do {
      iVar1 = FUN_0051e184(param_1,local_10);
      if (*(char *)(iVar1 + 0x30) != '\0') {
        iVar1 = FUN_0051e184(param_1,local_10);
        uVar2 = *(uint *)(iVar1 + 0x34);
        bVar3 = SCARRY4(local_c,uVar2);
        local_c = local_c + uVar2;
        if (bVar3) {
          thunk_FUN_00402874(uVar2);
        }
      }
      local_10 = local_10 + 1;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  return local_c;
}

