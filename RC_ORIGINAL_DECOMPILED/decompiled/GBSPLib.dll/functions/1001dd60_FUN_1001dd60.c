/*
 * FUN_1001dd60 at 1001dd60
 * undefined FUN_1001dd60(void)
 * Address ranges: 1001dd60-1001df11
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __fastcall FUN_1001dd60(undefined4 param_1,uint param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int local_8 [2];
  
  if ((param_2 & 0xffff0000) != 0x10010000) {
    FUN_10015fb0(0xffffffff,&DAT_10265ce0,s___Actor_path_c_1003c778,0x638,&DAT_10265ce0,0);
    return (int *)0x0;
  }
  piVar2 = (int *)FUN_10014310(0x44);
  piVar1 = piVar2 + 8;
  *piVar2 = 0;
  *piVar1 = 0;
  if (piVar2 == (int *)0x0) {
    FUN_10015fb0(0xffffffff,&DAT_10265ce0,s___Actor_path_c_1003c778,0x641,&DAT_10265ce0,0);
    return (int *)0x0;
  }
  piVar2[9] = param_2 >> 9 & 0x7f;
  piVar2[1] = param_2 >> 2 & 0x7f;
  piVar2[0xe] = 0;
  piVar2[0xf] = -0x40800000;
  piVar2[6] = 0;
  piVar2[7] = -0x40800000;
  piVar2[0x10] = 0;
  if ((param_2 & 2) != 0) {
    iVar3 = FUN_10027060(local_8);
    *piVar1 = iVar3;
    if (iVar3 == 0) {
      FUN_10015fb0(0xffffffff,&DAT_10265ce0,s___Actor_path_c_1003c778,0x657,&DAT_10265ce0,0);
      FUN_10014360(piVar2);
      _DAT_1003fde8 = 0;
      return (int *)0x0;
    }
    iVar3 = FUN_1001dd20();
    piVar2[9] = iVar3;
    if (local_8[0] != 0) {
      piVar2[0x10] = piVar2[0x10] | 2;
    }
  }
  if ((param_2 & 1) != 0) {
    iVar3 = FUN_10026190(local_8);
    *piVar2 = iVar3;
    if (iVar3 == 0) {
      FUN_10015fb0(0xffffffff,&DAT_10265ce0,s___Actor_path_c_1003c778,0x665,&DAT_10265ce0,0);
      if (*piVar1 != 0) {
        FUN_1001bb60();
      }
      FUN_10014360(piVar2);
      _DAT_1003fde8 = 0;
      return (int *)0x0;
    }
    iVar3 = FUN_1001db50();
    piVar2[1] = iVar3;
    if (local_8[0] != 0) {
      piVar2[0x10] = piVar2[0x10] | 2;
    }
  }
  piVar2[0x10] = piVar2[0x10] | 1;
  return piVar2;
}

