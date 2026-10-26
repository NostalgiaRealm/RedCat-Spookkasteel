/*
 * FUN_004318c0 at 004318c0
 * undefined FUN_004318c0(void)
 * Address ranges: 004318c0-004319f5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004318c0(int param_1,float param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  float fVar4;
  
  if ((DAT_006b52d8 & 1) == 0) {
    DAT_006b52d8 = DAT_006b52d8 | 1;
    DAT_006b52d4 = 85.0;
  }
  if ((DAT_006b52d8 & 2) == 0) {
    DAT_006b52d8 = DAT_006b52d8 | 2;
    _DAT_006b52d0 = 0.7;
  }
  if (*(char *)(param_1 + 0x394) != '\0') {
    if (*(int *)(param_1 + 0x390) != 0) {
      iVar1 = DAT_006b915c;
      if (DAT_006b915c == 0) {
        iVar1 = FUN_004bc480();
      }
      iVar3 = *(int *)(iVar1 + 0x4e8);
      if (iVar3 == -0x80000000) {
        puVar2 = *(undefined1 **)(iVar1 + 0x49c);
        if (puVar2 == (undefined1 *)0x0) {
          puVar2 = &DAT_0064a3b4;
        }
        iVar3 = FUN_0060af10(puVar2);
        *(int *)(iVar1 + 0x4e8) = iVar3;
      }
      if (iVar3 == 0) {
        DAT_006b52d4 = param_2 * 105.0 + 85.0;
        fVar4 = DAT_006b52d4;
        if (190.0 <= DAT_006b52d4) {
          fVar4 = 190.0;
        }
        FUN_004e2d60(fVar4);
      }
    }
    if (*(int *)(param_1 + 0x330) != 0) {
      _DAT_006b52d0 = param_2 * 1.5 + 0.7;
      if (_DAT_006b52d0 < 2.2) {
        *(float *)(*(int *)(param_1 + 0x330) + 0x130) = _DAT_006b52d0;
        return;
      }
      *(undefined4 *)(*(int *)(param_1 + 0x330) + 0x130) = 0x400ccccd;
    }
  }
  return;
}

