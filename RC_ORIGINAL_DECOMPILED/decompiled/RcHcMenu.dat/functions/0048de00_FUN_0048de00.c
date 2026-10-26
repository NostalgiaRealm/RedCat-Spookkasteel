/*
 * FUN_0048de00 at 0048de00
 * undefined __register FUN_0048de00(byte * param_1, undefined2 param_2)
 * Address ranges: 0048de00-0048de5a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0048de00(byte *param_1,undefined2 param_2)

{
  byte bVar1;
  
  if (9 < *param_1) {
    FUN_00403d94("PropRefPush: PropRef to deep");
  }
  *(undefined2 *)(param_1 + (uint)*param_1 * 2 + 2) = param_2;
  bVar1 = *param_1;
  *param_1 = *param_1 + 1;
  if (SCARRY1(bVar1,'\x01')) {
    param_1 = (byte *)thunk_FUN_00402874((uint)param_1);
  }
  if (9 < (uint)(int)(char)*param_1) {
    thunk_FUN_00402874((int)(char)*param_1);
  }
  return;
}

