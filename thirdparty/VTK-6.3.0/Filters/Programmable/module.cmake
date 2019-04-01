vtk_module(vtkFiltersProgrammable
  GROUPS
    StandAlone
  DEPENDS
    vtkCommonExecutionModel
  TEST_DEPENDS
    vtkRendering${VTK_RENDERING_BACKEND}
    vtkTestingRendering
    vtkInteractionStyle
  KIT
    vtkFilters
  )
