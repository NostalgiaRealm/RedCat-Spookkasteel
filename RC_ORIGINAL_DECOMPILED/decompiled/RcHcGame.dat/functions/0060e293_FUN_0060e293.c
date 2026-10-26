/*
 * FUN_0060e293 at 0060e293
 * undefined FUN_0060e293(void)
 * Address ranges: 0060e293-0060e3b2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void * FUN_0060e293(LPVOID param_1,uint param_2)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  LPVOID pvVar4;
  uint uVar5;
  
  if (param_1 == (LPVOID)0x0) {
    pvVar1 = _malloc(param_2);
  }
  else {
    if (param_2 == 0) {
      FUN_0060b25d(param_1);
    }
    else {
      do {
        if (param_2 < 0xffffffe1) {
          iVar2 = FUN_00616d76(param_1);
          if (iVar2 == 0) {
            if (param_2 == 0) {
              param_2 = 1;
            }
            param_2 = param_2 + 0xf & 0xfffffff0;
            pvVar4 = HeapReAlloc(DAT_00747ea0,0,param_1,param_2);
          }
          else {
            if (param_2 <= DAT_006b2e34) {
              iVar3 = FUN_00617581(iVar2,param_1,param_2);
              pvVar4 = param_1;
              if (iVar3 == 0) {
                pvVar4 = (LPVOID)FUN_006170cc(param_2);
                if (pvVar4 == (LPVOID)0x0) goto LAB_0060e32c;
                uVar5 = *(int *)((int)param_1 + -4) - 1;
                if (param_2 <= uVar5) {
                  uVar5 = param_2;
                }
                FUN_0060eb70(pvVar4,param_1,uVar5);
                FUN_00616da1(iVar2,param_1);
              }
              if (pvVar4 != (LPVOID)0x0) {
                return pvVar4;
              }
            }
LAB_0060e32c:
            if (param_2 == 0) {
              param_2 = 1;
            }
            param_2 = param_2 + 0xf & 0xfffffff0;
            pvVar4 = HeapAlloc(DAT_00747ea0,0,param_2);
            if (pvVar4 == (LPVOID)0x0) goto LAB_0060e38f;
            uVar5 = *(int *)((int)param_1 + -4) - 1;
            if (param_2 <= uVar5) {
              uVar5 = param_2;
            }
            FUN_0060eb70(pvVar4,param_1,uVar5);
            FUN_00616da1(iVar2,param_1);
          }
          if (pvVar4 != (LPVOID)0x0) {
            return pvVar4;
          }
        }
LAB_0060e38f:
        if (DAT_007101cc == 0) {
          return (void *)0x0;
        }
        iVar2 = FUN_0061ac91(param_2);
      } while (iVar2 != 0);
    }
    pvVar1 = (void *)0x0;
  }
  return pvVar1;
}

