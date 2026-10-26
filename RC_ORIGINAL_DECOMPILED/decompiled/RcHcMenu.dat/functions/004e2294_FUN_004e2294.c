/*
 * FUN_004e2294 at 004e2294
 * undefined __register FUN_004e2294(int * param_1)
 * Address ranges: 004e2294-004e22b8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004e2294(int *param_1)

{
  int iVar1;
  int extraout_EDX;
  
  iVar1 = param_1[0xc0] + 6;
  if (SCARRY4(param_1[0xc0],6)) {
    thunk_FUN_00402874((uint)param_1);
    iVar1 = extraout_EDX;
  }
  FUN_004e21f8(param_1,iVar1);
  return;
}

