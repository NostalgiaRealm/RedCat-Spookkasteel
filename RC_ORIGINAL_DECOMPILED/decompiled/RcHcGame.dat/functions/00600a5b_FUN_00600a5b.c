/*
 * FUN_00600a5b at 00600a5b
 * undefined FUN_00600a5b(void)
 * Address ranges: 00600a5b-00600a7b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_00600a5b(byte param_1,undefined4 param_2)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = FUN_006004d8(param_2,0,1);
  uVar2 = (uint3)((uint)*(int *)(iVar1 + 0x10) >> 8);
  return CONCAT31(uVar2 >> 2,
                  (char)(CONCAT31(uVar2,*(undefined1 *)(*(int *)(iVar1 + 0x10) + (uint)param_1 * 2))
                        >> 2)) & 0xffffff01;
}

