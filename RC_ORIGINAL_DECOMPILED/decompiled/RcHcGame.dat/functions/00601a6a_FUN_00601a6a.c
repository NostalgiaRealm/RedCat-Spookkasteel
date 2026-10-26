/*
 * FUN_00601a6a at 00601a6a
 * undefined FUN_00601a6a(void)
 * Address ranges: 00601a6a-00601b3c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __thiscall
FUN_00601a6a(int param_1,undefined4 *param_2,int param_3,undefined2 *param_4,int *param_5,
            int param_6,int param_7,int *param_8)

{
  int *piVar1;
  int *piVar2;
  undefined2 *puVar3;
  undefined2 uVar5;
  int iVar4;
  bool bVar6;
  
  piVar2 = param_8;
  piVar1 = param_5;
  *param_5 = param_3;
  *param_8 = param_6;
  puVar3 = (undefined2 *)*param_5;
  bVar6 = puVar3 != param_4;
  do {
    if (puVar3 == param_4) {
      return bVar6;
    }
    iVar4 = *piVar2;
    if (iVar4 == param_7) {
      return bVar6;
    }
    uVar5 = (undefined2)((uint)puVar3 >> 0x10);
    if (param_7 - iVar4 < DAT_006b28bc) {
      param_8 = (int *)*param_2;
      iVar4 = FUN_00600b97((int)&param_5 + 2,CONCAT22(uVar5,*puVar3),param_2,param_1 + 8);
      if (iVar4 < 1) {
        return 2;
      }
      if (param_7 - *piVar2 < iVar4) {
        *param_2 = param_8;
        return bVar6;
      }
      FUN_0060eb70(*piVar2,(int)&param_5 + 2,iVar4);
      *piVar1 = *piVar1 + 2;
      *piVar2 = *piVar2 + iVar4;
    }
    else {
      iVar4 = FUN_00600b97(iVar4,CONCAT22(uVar5,*puVar3),param_2,param_1 + 8);
      if (iVar4 < 1) {
        return 2;
      }
      *piVar1 = *piVar1 + 2;
      *piVar2 = *piVar2 + iVar4;
    }
    bVar6 = false;
    puVar3 = (undefined2 *)*piVar1;
  } while( true );
}

