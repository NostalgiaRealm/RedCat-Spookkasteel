/*
 * FUN_10024db0 at 10024db0
 * undefined FUN_10024db0(void)
 * Address ranges: 10024db0-10024edc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_10024db0(int *param_1,int *param_2,float param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = (int *)*param_1;
  iVar2 = FUN_10024d50(param_3);
  if (param_2 != (int *)0x0) {
    *param_2 = iVar2 + 1;
  }
  if ((-1 < iVar2) && (param_3 - 1e-05 < *(float *)(piVar3[1] * iVar2 + 8 + (int)piVar3))) {
    FUN_10015fb0(0x4a,&DAT_10265ce0,s___Actor_tkarray_c_1003c920,300,&DAT_10265ce0,0);
    return 0;
  }
  if (0x7ffffffe < *piVar3) {
    FUN_10015fb0(0x4e,&DAT_10265ce0,s___Actor_tkarray_c_1003c920,0x133,&DAT_10265ce0,0);
    return 0;
  }
  piVar3 = (int *)FUN_10014370(piVar3,(*piVar3 + 1) * piVar3[1] + 8);
  if (piVar3 == (int *)0x0) {
    FUN_10015fb0(0x4b,&DAT_10265ce0,s___Actor_tkarray_c_1003c920,0x13c,&DAT_10265ce0,0);
    return 0;
  }
  iVar4 = iVar2 + 1;
  if (iVar4 < *piVar3) {
    iVar1 = piVar3[1];
    FUN_10029010((iVar2 + 2) * iVar1 + 8 + (int)piVar3,iVar1 * iVar4 + 8 + (int)piVar3,
                 (*piVar3 - iVar4) * iVar1);
  }
  *(float *)(piVar3[1] * iVar4 + 8 + (int)piVar3) = param_3;
  *piVar3 = *piVar3 + 1;
  *param_1 = (int)piVar3;
  return 1;
}

