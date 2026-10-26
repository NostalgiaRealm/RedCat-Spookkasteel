/*
 * FUN_004857f4 at 004857f4
 * undefined __register FUN_004857f4(int * param_1, int param_2)
 * Address ranges: 004857f4-004858f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004857f4(int *param_1,int param_2)

{
  char cVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  if (param_2 != param_1[0x1c]) {
    if (param_2 < 1) {
      FUN_00473628(param_1,param_2);
      FUN_004857c8();
    }
    else if (*(char *)((int)param_1 + 0x91) == '\0') {
      cVar1 = FUN_00485760();
      if (cVar1 != '\0') {
        FUN_004857c8();
        FUN_00473130(param_1);
        thunk_FUN_00478ffa(param_1[0x5a]);
        if (param_2 == 0x7fffffff) {
          uVar3 = 0x10000;
        }
        else {
          uVar3 = (uint)*(ushort *)(param_1 + 0x7a) * param_2;
        }
        puVar2 = FUN_0040960c(uVar3);
        param_1[0x82] = (int)puVar2;
        param_1[0x7d] = (int)uVar3 / (int)(uint)*(ushort *)(param_1 + 0x7a);
        param_1[0x7e] = (int)uVar3 / (int)(uint)*(ushort *)(param_1 + 0x7a);
        param_1[0x7f] = param_1[0x7d];
        param_1[0x80] = 0;
        FUN_00473628(param_1,param_2);
        (**(code **)(*param_1 + 0x174))();
      }
    }
  }
  return;
}

