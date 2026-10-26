/*
 * FUN_005e6700 at 005e6700
 * undefined FUN_005e6700(void)
 * Address ranges: 005e6700-005e6880
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_005e6700(int param_1,int param_2,char *param_3,char *param_4,undefined4 *param_5,
            undefined4 *param_6,undefined1 *param_7)

{
  void **ppvVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined1 auStack_2c [4];
  int iStack_28;
  undefined1 local_1c [4];
  int iStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00646900;
  pvStack_c = ExceptionList;
  piVar6 = *(int **)(param_1 + 4);
  ExceptionList = &pvStack_c;
  ppvVar1 = &pvStack_c;
  if (piVar6 != *(int **)(param_1 + 8)) {
    do {
      pcVar3 = (char *)(**(code **)(*(int *)*piVar6 + 8))();
      iVar4 = __strcmpi(param_3,pcVar3);
      if (iVar4 == 0) {
        pcVar3 = *(char **)(*piVar6 + 8);
        if (pcVar3 == (char *)0x0) {
          pcVar3 = "";
        }
        iVar4 = __strcmpi(param_4,pcVar3);
        if (iVar4 == 0) {
          if (param_2 == ((int *)*piVar6)[5]) {
            uVar5 = (**(code **)(*(int *)*piVar6 + 0xc))();
            *param_5 = uVar5;
            if (param_6 != (undefined4 *)0x0) {
              uVar5 = (**(code **)(*(int *)*piVar6 + 0x10))();
              *param_6 = uVar5;
            }
            if (param_7 == (undefined1 *)0x0) {
              ExceptionList = pvStack_c;
              return;
            }
            *param_7 = *(undefined1 *)(*piVar6 + 0x18);
            ExceptionList = pvStack_c;
            return;
          }
          uVar5 = FUN_005e7110(auStack_2c,s_Item_has_wrong_type___s__s_006b0f40,param_3,param_4);
          uStack_4 = 0;
          FUN_005ea590(0x138a,uVar5,param_3,param_4);
          if (iStack_28 == 0) {
            ExceptionList = pvStack_c;
            return;
          }
          pcVar3 = (char *)(iStack_28 + -1);
          cVar2 = *(char *)(iStack_28 + -1);
          if ((cVar2 == '\0') || (cVar2 == -1)) goto LAB_005e6863;
          goto LAB_005e67b9;
        }
      }
      piVar6 = piVar6 + 1;
      ppvVar1 = ExceptionList;
    } while (piVar6 != *(int **)(param_1 + 8));
  }
  ExceptionList = ppvVar1;
  uVar5 = FUN_005e7110(local_1c,s_Item_not_found___s__s_006b0f5c,param_3,param_4);
  uStack_4 = 1;
  FUN_005ea590(0x1389,uVar5,param_3,param_4);
  if (iStack_18 != 0) {
    pcVar3 = (char *)(iStack_18 + -1);
    cVar2 = *(char *)(iStack_18 + -1);
    if ((cVar2 != '\0') && (cVar2 != -1)) {
LAB_005e67b9:
      *pcVar3 = cVar2 + -1;
      ExceptionList = pvStack_c;
      return;
    }
LAB_005e6863:
    FUN_005fe5f0(pcVar3);
  }
  ExceptionList = pvStack_c;
  return;
}

