/*
 * FUN_1000bf9d at 1000bf9d
 * int * __cdecl FUN_1000bf9d(int * param_1, uint * param_2)
 * Address ranges: 1000bf9d-1000c0d4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __cdecl FUN_1000bf9d(int *param_1,uint *param_2)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  uint *puVar4;
  
  if (param_1 == (int *)0x0) {
    piVar1 = _malloc((size_t)param_2);
  }
  else {
    if (param_2 == (uint *)0x0) {
      FUN_10008c95(param_1);
    }
    else {
      do {
        if (param_2 < (uint *)0xffffffe1) {
          FUN_1000b2ca(9);
          puVar2 = (uint *)FUN_1000b37e((int)param_1);
          if (puVar2 == (uint *)0x0) {
            FUN_1000b32b(9);
            if (param_2 == (uint *)0x0) {
              param_2 = (uint *)0x1;
            }
            param_2 = (uint *)((int)param_2 + 0xfU & 0xfffffff0);
            piVar1 = HeapReAlloc(DAT_100ec82c,0,param_1,(SIZE_T)param_2);
          }
          else {
            if (DAT_100190e4 < param_2) {
LAB_1000c03c:
              if (param_2 == (uint *)0x0) {
                param_2 = (uint *)0x1;
              }
              param_2 = (uint *)((int)param_2 + 0xfU & 0xfffffff0);
              piVar1 = HeapAlloc(DAT_100ec82c,0,(SIZE_T)param_2);
              if (piVar1 != (int *)0x0) {
                puVar4 = (uint *)(param_1[-1] - 1U);
                if (param_2 <= (uint *)(param_1[-1] - 1U)) {
                  puVar4 = param_2;
                }
                FUN_1000ff40(piVar1,param_1,(uint)puVar4);
                FUN_1000b3a9(puVar2,(uint)param_1);
              }
            }
            else {
              iVar3 = FUN_1000bb89(puVar2,(int)param_1,(int)param_2);
              piVar1 = param_1;
              if (iVar3 == 0) {
                piVar1 = FUN_1000b6d4(param_2);
                if (piVar1 == (int *)0x0) goto LAB_1000c03c;
                puVar4 = (uint *)(param_1[-1] - 1U);
                if (param_2 <= (uint *)(param_1[-1] - 1U)) {
                  puVar4 = param_2;
                }
                FUN_1000ff40(piVar1,param_1,(uint)puVar4);
                FUN_1000b3a9(puVar2,(uint)param_1);
              }
              if (piVar1 == (int *)0x0) goto LAB_1000c03c;
            }
            FUN_1000b32b(9);
          }
          if (piVar1 != (int *)0x0) {
            return piVar1;
          }
        }
        if (DAT_100ec15c == 0) {
          return (int *)0x0;
        }
        iVar3 = FUN_1000b169(param_2);
      } while (iVar3 != 0);
    }
    piVar1 = (int *)0x0;
  }
  return piVar1;
}

