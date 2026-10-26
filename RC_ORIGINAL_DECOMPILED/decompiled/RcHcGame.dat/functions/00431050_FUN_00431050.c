/*
 * FUN_00431050 at 00431050
 * undefined FUN_00431050(void)
 * Address ranges: 00431050-00431079
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00431050(void)

{
  int iVar1;
  
  iVar1 = DAT_006b915c;
  if (DAT_006b915c == 0) {
    iVar1 = FUN_004bc480();
  }
  FUN_0060a6f2(iVar1,0,&CAdamApplication::RTTI_Type_Descriptor,&CRCApplication::RTTI_Type_Descriptor
               ,1);
  FUN_00492190();
  return;
}

