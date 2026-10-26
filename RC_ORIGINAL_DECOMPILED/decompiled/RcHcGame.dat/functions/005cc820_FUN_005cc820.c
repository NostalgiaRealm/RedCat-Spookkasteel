/*
 * FUN_005cc820 at 005cc820
 * undefined FUN_005cc820(void)
 * Address ranges: 005cc820-005cca28
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005cc820(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  
  uVar2 = FUN_005cc4e0(0,&PTR_DAT_006aa49c,4);
  FUN_005cc7d0(param_1,uVar2);
  uVar2 = FUN_005cc4e0(1,s_float_006aa494,4);
  FUN_005cc7d0(param_1,uVar2);
  uVar2 = FUN_005cc4e0(2,s_color_006aa48c,0x10);
  FUN_005cc7d0(param_1,uVar2);
  uVar2 = FUN_005cc4e0(3,s_point_006aa484,0xc);
  FUN_005cc7d0(param_1,uVar2);
  uVar2 = FUN_005cc4e0(4,s_string_006aa47c,4);
  FUN_005cc7d0(param_1,uVar2);
  uVar2 = FUN_005cc4e0(7,&PTR_DAT_006aa478,4);
  FUN_005cc7d0(param_1,uVar2);
  uVar2 = FUN_005cc4e0(5,s_model_00698ce0,4);
  FUN_005cc7d0(param_1,uVar2);
  puVar6 = param_1;
  do {
    puVar1 = param_1;
    if (puVar6 == (undefined4 *)0x0) {
      do {
        if (puVar1 == (undefined4 *)0x0) {
          return 1;
        }
        iVar5 = puVar1[3];
        pcVar3 = (char *)FUN_005cc350(iVar5,s_classname_006aa46c);
        if ((pcVar3 != (char *)0x0) && (iVar4 = __strcmpi(pcVar3,s__typedef__006aa460), iVar4 == 0))
        {
          iVar4 = FUN_005cc350(iVar5,s__typename__006aa454);
          if (iVar4 == 0) {
            return 0;
          }
          iVar4 = FUN_005cc6a0(param_1,iVar4);
          if (iVar4 != 0) {
            for (puVar6 = *(undefined4 **)(iVar5 + 4); puVar6 != (undefined4 *)0x0;
                puVar6 = (undefined4 *)*puVar6) {
              iVar5 = __strcmpi((char *)puVar6[1],s_classname_006aa46c);
              if ((iVar5 != 0) &&
                 (iVar5 = __strcmpi((char *)puVar6[1],s__typename__006aa454), iVar5 != 0)) {
                iVar5 = FUN_005cc6a0(param_1,puVar6[2]);
                if ((iVar5 == 0) ||
                   ((iVar5 = FUN_005cc400(puVar6[1],*(undefined4 *)(iVar4 + 0x10),iVar5), iVar5 == 0
                    || (iVar5 = FUN_005cc590(iVar4,iVar5), iVar5 == 0)))) goto LAB_005cca15;
                puVar6 = (undefined4 *)*puVar6;
              }
            }
          }
        }
        puVar1 = (undefined4 *)*puVar1;
      } while( true );
    }
    uVar2 = puVar6[3];
    pcVar3 = (char *)FUN_005cc350(uVar2,s_classname_006aa46c);
    if ((pcVar3 != (char *)0x0) && (iVar4 = __strcmpi(pcVar3,s__typedef__006aa460), iVar4 == 0)) {
      iVar4 = FUN_005cc350(uVar2,s__typename__006aa454);
      if (iVar4 == 0) {
        return 0;
      }
      iVar4 = FUN_005cc4e0(6,iVar4,4);
      if (iVar4 == 0) {
        return 0;
      }
      iVar5 = FUN_005cc7d0(param_1,iVar4);
      if (iVar5 == 0) {
LAB_005cca15:
        if (iVar4 != 0) {
          FUN_005cc530(iVar4);
        }
        return 0;
      }
    }
    puVar6 = (undefined4 *)*puVar6;
  } while( true );
}

