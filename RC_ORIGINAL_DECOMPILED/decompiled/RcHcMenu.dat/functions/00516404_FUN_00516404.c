/*
 * FUN_00516404 at 00516404
 * int __register FUN_00516404(int param_1)
 * Address ranges: 00516404-00516462
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_00516404(int param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_c = 0;
  iVar1 = FUN_0045ba40(*(int *)(param_1 + 8));
  uVar2 = iVar1 - 1;
  if (SBORROW4(iVar1,1)) {
    uVar2 = thunk_FUN_00402874(uVar2);
  }
  if (-1 < (int)uVar2) {
    local_14 = uVar2 + 1;
    local_10 = 0;
    do {
      uVar2 = (**(code **)**(undefined4 **)(param_1 + 8))(*(undefined4 **)(param_1 + 8),local_10);
      if (*(char *)(uVar2 + 4) != '\0') {
        bVar3 = SCARRY4(local_c,1);
        local_c = local_c + 1;
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

