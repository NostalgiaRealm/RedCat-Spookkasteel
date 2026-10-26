/*
 * FUN_0045e0dc at 0045e0dc
 * bool __register FUN_0045e0dc(int param_1)
 * Address ranges: 0045e0dc-0045e148
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_0045e0dc(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint extraout_EDX;
  bool bVar3;
  uint local_18;
  bool local_9;
  
  local_9 = true;
  local_18 = 0;
  while ((local_9 != false && ((int)local_18 < 8))) {
    uVar1 = local_18;
    if (7 < local_18) {
      uVar1 = thunk_FUN_00402874(local_18);
    }
    uVar2 = CONCAT31((int3)(uVar1 >> 8),*(undefined1 *)(param_1 + 8 + uVar1));
    uVar1 = local_18;
    if (7 < local_18) {
      uVar2 = thunk_FUN_00402874(uVar2);
      uVar1 = extraout_EDX;
    }
    local_9 = (char)uVar2 == (&stack0x00000004)[uVar1];
    bVar3 = SCARRY4(local_18,1);
    local_18 = local_18 + 1;
    if (bVar3) {
      thunk_FUN_00402874(uVar2);
    }
  }
  return local_9;
}

