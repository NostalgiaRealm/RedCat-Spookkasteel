/*
 * FUN_0045a264 at 0045a264
 * undefined4 __register FUN_0045a264(undefined4 * param_1)
 * Address ranges: 0045a264-0045a2a1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0045a264(undefined4 *param_1)

{
  bool bVar1;
  undefined4 local_c;
  undefined4 uStack_8;
  
  local_c = *param_1;
  uStack_8 = param_1[1];
  bVar1 = FUN_0045a244((int)&local_c);
  if (!bVar1) {
    FUN_00403d94("TVarRecAsTObject: Not an object");
  }
  return local_c;
}

