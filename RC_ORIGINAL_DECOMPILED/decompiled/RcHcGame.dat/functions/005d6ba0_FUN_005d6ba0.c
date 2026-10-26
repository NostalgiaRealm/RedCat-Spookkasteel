/*
 * FUN_005d6ba0 at 005d6ba0
 * undefined FUN_005d6ba0(void)
 * Address ranges: 005d6ba0-005d6c5d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_005d6ba0(undefined4 param_1,int *param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_4;
  
  piVar2 = param_2;
  uVar4 = 1;
  if (param_2 != (int *)0x0) {
    local_4 = param_1;
    if (*param_2 != 0) {
      iVar3 = FUN_005d5c60();
      while (iVar3 != 0) {
        FUN_005d5c90(iVar3,&local_4,&param_2);
        iVar3 = FUN_005c1c20();
        if (iVar3 == 0) {
          uVar4 = 0;
        }
        piVar2[1] = piVar2[1] + -1;
        while (bVar1 = param_2 != (int *)0x0, param_2 = (int *)((int)param_2 + -1), bVar1) {
          FUN_005c02b0();
          piVar2[2] = piVar2[2] + -1;
        }
        iVar3 = FUN_005d5c60();
      }
      FUN_005d5af0(*piVar2);
    }
    FUN_005cf400(piVar2);
    _DAT_007203c0 = 0;
    return uVar4;
  }
  return 1;
}

