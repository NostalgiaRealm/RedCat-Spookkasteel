/*
 * FUN_00605614 at 00605614
 * undefined FUN_00605614(void)
 * Address ranges: 00605614-006056f1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_00605614(int param_1,int param_2,uint param_3,uint param_4)

{
  char cVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  uint uVar4;
  uint uVar5;
  
  if (*(uint *)(param_2 + 8) < param_3) {
    FUN_005fe747();
  }
  uVar5 = *(uint *)(param_2 + 8) - param_3;
  if (param_4 < uVar5) {
    uVar5 = param_4;
  }
  if (param_1 == param_2) {
    FUN_00605866(uVar5 + param_3,0xffffffff);
    FUN_00605866(0,param_3);
  }
  else {
    if ((uVar5 != 0) && (uVar5 == *(uint *)(param_2 + 8))) {
      puVar2 = *(undefined2 **)(param_2 + 4);
      if (puVar2 == (undefined2 *)0x0) {
        puVar2 = &DAT_00651838;
      }
      if (*(byte *)((int)puVar2 + -1) < 0xfe) {
        FUN_00605987(1);
        puVar2 = *(undefined2 **)(param_2 + 4);
        if (puVar2 == (undefined2 *)0x0) {
          puVar2 = &DAT_00651838;
        }
        *(undefined2 **)(param_1 + 4) = puVar2;
        *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
        *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
        *(char *)((int)puVar2 + -1) = *(char *)((int)puVar2 + -1) + '\x01';
        return param_1;
      }
    }
    cVar1 = FUN_006058fe(uVar5,1);
    if (cVar1 != '\0') {
      puVar2 = &DAT_00651838;
      if (*(undefined2 **)(param_2 + 4) != (undefined2 *)0x0) {
        puVar2 = *(undefined2 **)(param_2 + 4);
      }
      puVar2 = puVar2 + param_3;
      puVar3 = *(undefined2 **)(param_1 + 4);
      for (uVar4 = uVar5; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar3 = *puVar2;
        puVar3 = puVar3 + 1;
        puVar2 = puVar2 + 1;
      }
      *(uint *)(param_1 + 8) = uVar5;
      *(undefined2 *)(*(int *)(param_1 + 4) + uVar5 * 2) = 0;
    }
  }
  return param_1;
}

