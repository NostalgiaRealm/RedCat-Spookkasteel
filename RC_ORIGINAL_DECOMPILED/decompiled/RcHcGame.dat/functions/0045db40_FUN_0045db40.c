/*
 * FUN_0045db40 at 0045db40
 * undefined FUN_0045db40(void)
 * Address ranges: 0045db40-0045dc1e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_0045db40(int param_1,int param_2,uint param_3,uint param_4)

{
  char cVar1;
  uint uVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  if (*(uint *)(param_2 + 8) < param_3) {
    FUN_005fe747();
  }
  uVar2 = *(int *)(param_2 + 8) - param_3;
  if (uVar2 < param_4) {
    param_4 = uVar2;
  }
  if (-*(int *)(param_1 + 8) - 1U <= param_4) {
    FUN_005fe5fb();
  }
  if (param_4 == 0) {
    return param_1;
  }
  uVar2 = *(int *)(param_1 + 8) + param_4;
  if (0xfffffffd < uVar2) {
    FUN_005fe5fb();
  }
  puVar3 = *(undefined1 **)(param_1 + 4);
  if (((puVar3 == (undefined1 *)0x0) || (cVar1 = puVar3[-1], cVar1 == '\0')) || (cVar1 == -1)) {
    if (uVar2 == 0) {
      if (puVar3 == (undefined1 *)0x0) {
        return param_1;
      }
      *(undefined4 *)(param_1 + 8) = 0;
      *puVar3 = 0;
      return param_1;
    }
    if (uVar2 <= *(uint *)(param_1 + 0xc)) goto LAB_0045dbe1;
  }
  else if (uVar2 == 0) {
    puVar3[-1] = cVar1 + -1;
    FUN_004040a0(0);
    return param_1;
  }
  FUN_00401a60(uVar2);
LAB_0045dbe1:
  puVar3 = *(undefined1 **)(param_2 + 4);
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = &DAT_0064a3b4;
  }
  puVar5 = (undefined4 *)(puVar3 + param_3);
  puVar6 = (undefined4 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 4));
  for (uVar4 = param_4 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  for (param_4 = param_4 & 3; param_4 != 0; param_4 = param_4 - 1) {
    *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  *(uint *)(param_1 + 8) = uVar2;
  *(undefined1 *)(*(int *)(param_1 + 4) + uVar2) = 0;
  return param_1;
}

