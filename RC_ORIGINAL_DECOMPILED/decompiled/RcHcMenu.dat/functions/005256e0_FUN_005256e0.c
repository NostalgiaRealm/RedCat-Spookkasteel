/*
 * FUN_005256e0 at 005256e0
 * undefined __register FUN_005256e0(int * param_1)
 * Address ranges: 005256e0-00525758
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005256e0(int *param_1)

{
  bool bVar1;
  LONG LVar2;
  uint uVar3;
  int iVar4;
  int local_c;
  
  bVar1 = FUN_00525768(param_1);
  if (bVar1) {
    LVar2 = FUN_0041cdc4((int *)param_1[0x7c],&DAT_00525764);
    uVar3 = FUN_0051e1b8(param_1);
    local_c = LVar2 + *(int *)(uVar3 + 0x208);
    if (SCARRY4(LVar2,*(int *)(uVar3 + 0x208))) {
      thunk_FUN_00402874(uVar3);
    }
  }
  else {
    iVar4 = FUN_0051e1b8(param_1);
    local_c = *(int *)(iVar4 + 0x208);
  }
  if (local_c != param_1[0xf]) {
    FUN_00431f98(param_1,local_c);
    FUN_0051e078(param_1);
  }
  return;
}

