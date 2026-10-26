/*
 * FUN_004c6c8c at 004c6c8c
 * uint __register FUN_004c6c8c(int * param_1)
 * Address ranges: 004c6c8c-004c6cee
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_004c6c8c(int *param_1)

{
  int iVar1;
  int extraout_EDX;
  uint local_c;
  
  local_c = FUN_004129d0(param_1[0x1e]);
  if (*(int *)(param_1[0x1e] + 4) <= (int)local_c) {
    local_c = FUN_0043e6bc(param_1,(int *)0x0,(int *)0x0);
    iVar1 = local_c + 1;
    if (SCARRY4(local_c,1)) {
      thunk_FUN_00402874(local_c);
      iVar1 = extraout_EDX;
    }
    FUN_004128e8(param_1[0x1e],iVar1);
  }
  FUN_0041298c(param_1[0x1e],local_c,'\x01');
  return local_c;
}

