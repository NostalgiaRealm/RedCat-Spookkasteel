/*
 * FUN_00601b3d at 00601b3d
 * undefined FUN_00601b3d(void)
 * Address ranges: 00601b3d-00601b8b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall
FUN_00601b3d(int param_1,undefined4 param_2,undefined2 *param_3,undefined2 *param_4,uint param_5)

{
  undefined2 *puVar1;
  uint uVar2;
  undefined2 *puVar3;
  
  puVar1 = param_3;
  puVar3 = param_3;
  if (param_3 != param_4) {
    while (param_5 != 0) {
      uVar2 = FUN_00600b97((int)&param_3 + 2,CONCAT22((short)((uint)(param_1 + 8) >> 0x10),*puVar3),
                           param_2,param_1 + 8);
      if (((int)uVar2 < 1) || (param_5 < uVar2)) break;
      param_5 = param_5 - uVar2;
      puVar3 = puVar3 + 1;
      if (puVar3 == param_4) break;
    }
  }
  return (int)puVar3 - (int)puVar1 >> 1;
}

