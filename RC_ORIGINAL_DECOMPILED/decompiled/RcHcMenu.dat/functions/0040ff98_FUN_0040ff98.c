/*
 * FUN_0040ff98 at 0040ff98
 * undefined __register FUN_0040ff98(int * param_1, int param_2, undefined4 * param_3)
 * Address ranges: 0040ff98-0040ffd7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0040ff98(int *param_1,int param_2,undefined4 *param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  puVar3 = *(undefined4 **)(param_2 + 0x10);
  if (*(undefined4 **)(param_2 + 0x10) == (undefined4 *)0x80000000) {
    puVar3 = param_3;
  }
  pcVar1 = *(code **)(param_2 + 4);
  if (*(byte *)(param_2 + 7) != 0xff) {
    if (0xfd < *(byte *)(param_2 + 7)) {
      (**(code **)((int)(short)pcVar1 + *param_1))();
      return;
    }
    (*pcVar1)(param_1,puVar3);
    return;
  }
  puVar3 = (undefined4 *)((int)param_1 + ((uint)pcVar1 & 0xffffff));
  uVar2 = puVar3[1];
  *param_3 = *puVar3;
  param_3[1] = uVar2;
  return;
}

