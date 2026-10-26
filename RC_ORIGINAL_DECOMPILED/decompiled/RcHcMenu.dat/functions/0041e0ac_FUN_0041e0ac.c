/*
 * FUN_0041e0ac at 0041e0ac
 * ushort __register FUN_0041e0ac(ushort * param_1)
 * Address ranges: 0041e0ac-0041e0c1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ushort FUN_0041e0ac(ushort *param_1)

{
  ushort *puVar1;
  ushort uVar2;
  
  uVar2 = 0;
  puVar1 = param_1 + 10;
  for (; (int)param_1 < (int)puVar1; param_1 = param_1 + 1) {
    uVar2 = uVar2 ^ *param_1;
  }
  return uVar2;
}

