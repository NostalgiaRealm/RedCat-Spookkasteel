/*
 * FUN_004d55e0 at 004d55e0
 * int __register FUN_004d55e0(int param_1, int param_2)
 * Address ranges: 004d55e0-004d562b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_004d55e0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int extraout_EDX;
  bool bVar3;
  undefined4 local_10;
  
  local_10 = param_2;
  while( true ) {
    iVar1 = FUN_00404030(param_1);
    if (iVar1 <= local_10) {
      return local_10;
    }
    uVar2 = local_10 - 1;
    iVar1 = param_1;
    if (*(uint *)(param_1 + -4) <= uVar2) {
      uVar2 = thunk_FUN_00402874(uVar2);
      iVar1 = extraout_EDX;
    }
    if (*(char *)(iVar1 + -1 + uVar2 + 1) != ' ') break;
    bVar3 = SCARRY4(local_10,1);
    local_10 = local_10 + 1;
    if (bVar3) {
      thunk_FUN_00402874(uVar2 + 1);
    }
  }
  return local_10;
}

