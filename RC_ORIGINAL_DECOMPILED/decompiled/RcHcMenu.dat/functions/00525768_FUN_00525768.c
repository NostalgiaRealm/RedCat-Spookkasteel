/*
 * FUN_00525768 at 00525768
 * bool __register FUN_00525768(int * param_1)
 * Address ranges: 00525768-005257b9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_00525768(int *param_1)

{
  uint uVar1;
  bool bVar2;
  undefined1 local_11;
  undefined4 local_10;
  
  local_11 = false;
  local_10 = 0;
  while( true ) {
    uVar1 = FUN_0051e5f0((int)param_1);
    if (((int)uVar1 <= (int)local_10) || (local_11 != false)) break;
    uVar1 = FUN_0051e404(param_1,local_10);
    local_11 = *(int *)(uVar1 + 0x2c) != 0;
    bVar2 = SCARRY4(local_10,1);
    local_10 = local_10 + 1;
    if (bVar2) {
      thunk_FUN_00402874(uVar1);
    }
  }
  return local_11;
}

