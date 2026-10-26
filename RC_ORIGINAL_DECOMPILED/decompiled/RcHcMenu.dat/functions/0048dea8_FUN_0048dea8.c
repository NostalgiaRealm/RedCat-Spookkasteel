/*
 * FUN_0048dea8 at 0048dea8
 * undefined2 __register FUN_0048dea8(byte * param_1)
 * Address ranges: 0048dea8-0048df02
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined2 FUN_0048dea8(byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  
  if (*param_1 == 0) {
    FUN_00403d94("PropRefPop: PropRef is empty");
  }
  bVar1 = *param_1;
  *param_1 = *param_1 - 1;
  pbVar2 = param_1;
  if (SBORROW1(bVar1,'\x01')) {
    pbVar2 = (byte *)thunk_FUN_00402874((uint)param_1);
  }
  if (9 < (uint)(int)(char)*pbVar2) {
    thunk_FUN_00402874((int)(char)*pbVar2);
  }
  return *(undefined2 *)(param_1 + (uint)*param_1 * 2 + 2);
}

